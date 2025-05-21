package hr.fer.oop;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Locale;

public class Parser {
	
	public static Reading parseInputString(String inputReadingString) throws ParseReadingException{

		Integer deviceId;
		LocalDate timestamp;
		SensorReadingValue[] data;

		String[] parts = inputReadingString.split(", ");
		if (parts.length < 3){
			throw new IncorrectReadingFormatException();
		} else {
			String[] p1 = parts[0].split(":");
			String[] p2 = parts[1].split(":");
			try {
				deviceId = Integer.parseInt(p1[1]);
			} catch (Exception e) {
				throw new FormatException(e);
			}
			try {
				timestamp = parseDate(p2[1]);
			} catch (Exception e) {
				throw new FormatException(e);
			}
		}

		data = new SensorReadingValue[parts.length-2];
		int x = 0;

		for (int i = 0; i< data.length; i++) {
			try {
				String[] a1 = parts[i + 2].split(":");
				data[i] = new SensorReadingValue(a1[0], a1[1]);
				x++;
			} catch (Exception e){
				data[i] = null;
			}
		}

		if (x==0) {
			throw new ReadingsFormatException();
		}

		return new Reading(deviceId, data, timestamp);
	}
	
	private static LocalDate parseDate (String dateA) {
		DateTimeFormatter dtf = DateTimeFormatter.ofPattern("MM-dd-yyyy");
		dtf = dtf.withLocale( Locale.GERMAN );
		LocalDate date = LocalDate.parse(dateA, dtf);
		
		return date;
	}

}
