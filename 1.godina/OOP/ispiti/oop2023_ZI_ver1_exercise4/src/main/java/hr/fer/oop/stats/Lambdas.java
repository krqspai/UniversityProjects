package hr.fer.oop.stats;

import java.util.*;
import java.util.Map.Entry;
import java.util.function.BiConsumer;
import java.util.function.BiFunction;
import java.util.stream.Stream;

public class Lambdas {

    public static BiConsumer<Stream<String>,    //prima stream i mapu
            Map<String, Collection<Entry<Integer, Long>>>> loadFromStream = (lines, map) -> {
        lines
                .map(line -> line.split(","))
                .forEach(parts -> map.compute(parts[0], (k, v) -> {v.add(new AbstractMap.SimpleEntry<Integer, Long>(Integer.parseInt(parts[1]), Long.parseLong(parts[2]))); return v;}));
    };

    public static BiFunction<Map<String, Collection<Entry<Integer, Long>>>,     //prima mapu i godinu, vraca kolekciju
            Integer, Collection<Entry<String, Long>>> getValuesForYear = null;
//            (map, year) ->
//            map.values().stream()
//                    .map(col -> new HashSet(col))
//                    .filter(col -> col.)

    public static BiFunction<Map<String, Collection<Entry<Integer, Long>>>,     // prima mapu i string, vraca entry
            String, Entry<Integer, Long>> getMinForCountry = null;
//            (map, country) ->
//            map.values().stream()
//                    .filter(col -> )
}
