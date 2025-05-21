package hr.fer.oop.t4;

import java.io.IOException;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class CityLoader {

    public static List<City> load(String path) throws IOException {

        Path filePath = Path.of(path);

        List<City> list = new ArrayList<>();
        Scanner sc = new Scanner(filePath);
        String line = sc.nextLine();
        while(line!=null){
            String[] parts = line.split(",");
            list.add(new City(parts[7], parts[1], Double.parseDouble(parts[2]), Double.parseDouble(parts[3]), parts[4], parts[5], parts[6], CityType.valueOf(parts[8]), Integer.parseInt(parts[9]), Integer.parseInt(parts[10])));
            line = sc.nextLine();
        }

        return list;

    }


}