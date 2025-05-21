package hr.fer.oop.ljir.z3;

import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class SequenceStats {
    public static int totalSeqLength(List<Sequence> seqList) {
        return seqList.stream()
                .mapToInt(seq -> seq.getSequence().length())
                .sum();
    }

    public static List<String> seqNames(Stream<Sequence> seqList) {
        return seqList
                .map(seq -> seq.getName())
                .toList();
    }

    public static double avgQuality(List<Sequence> seqList) {
        return seqList.stream()
                .mapToDouble(seq -> seq.avgSeqQuality())
                .average()
                .getAsDouble();
    }

    // Sequences with Quality above threshold
    public static Stream<Sequence> usableSequences(List<Sequence> seqList, double thqual) {
        return seqList.stream()
                .filter(seq -> seq.avgSeqQuality()>thqual)
                .map(seq -> new Sequence(seq.getName(), seq.getSequence(), ""));
    }

    //dir dodatak
    public static int maxSeqLength(List<Sequence> seqList){
        return seqList.stream()
                .mapToInt(seq -> seq.getSequence().length())
                .max()
                .getAsInt();
    }

    public static double avgGCContent(Stream<Sequence> seqList){
        return seqList
                .mapToDouble(seq -> seq.getGCContent())
                .average()
                .getAsDouble();
    }

    public static Stream<Sequence> usableSequences2(List<Sequence> seqList, double thGC){
        return seqList.stream()
                .filter(seq -> seq.getGCContent() > thGC)
                .map(seq -> new Sequence(seq.getName(), seq.getSequence(), ""));
    }
}
