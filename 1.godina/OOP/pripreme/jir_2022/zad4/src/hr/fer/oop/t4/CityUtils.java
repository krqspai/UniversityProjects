package hr.fer.oop.t4;

import java.util.Comparator;
import java.util.Optional;
import java.util.stream.Stream;

public class CityUtils {

    //big city == population > 1 000 000
    public static long countBigCitiesInACountry(Stream<City> cities, String countryName) {
        return cities.filter(city -> city.getCountryName().equals(countryName))
                .filter(city -> city.getPopulation() > 1000000)
                .count();
    }

    // northest City == city with max lat
    public static City northestCityInACountry(Stream<City> cities, String countryISO2) {
         return cities.filter(city -> city.getCountryISO2().equals(countryISO2))
                .max((o1, o2) -> Double.compare(o1.getLat(), o2.getLat()))
                 .get();

    }

    // returns ascii name!
    public static Stream<String> capitalCitiesStartingWithALetter(Stream<City> cities, char letter) {
        return cities.filter(city -> city.getName().startsWith(String.valueOf(letter)))
                .filter(city -> city.getCapitalType().equals(CityType.PRIMARY))
                .map(city -> city.getAsciiName());
    }

}
