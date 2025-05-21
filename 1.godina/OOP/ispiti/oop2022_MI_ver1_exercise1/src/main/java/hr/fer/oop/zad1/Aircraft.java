package hr.fer.oop.zad1;

// add and fix everything except toString method

abstract class Aircraft {
	final private String model;
	final private String dateProduced;

	Aircraft(String model, String dateProduced) {
		this.model = model;
		this.dateProduced = dateProduced;
	}

	public String getModel() {
		return model;
	}

	public String getDateProduced() {
		return dateProduced;
	}

	public abstract Status aircraftStatus();

	@Override
	public String toString() {
		return String.format("Aircraft model %s is produced %s", model, dateProduced);
	}
	
}

