package hr.fer.oop.ljir.z3;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Sequence {

    private String name;
    private String sequence;
    private String quality;

    public Sequence(String name, String sequence, String quality) {
        super();
        this.name = name;
        this.sequence = sequence;
        this.quality = quality;
    }

    public String getName() {
        return name;
    }

    public String getSequence() {
        return sequence;
    }

    public String getQuality() {
        return quality;
    }

    public String toString() {
        return "---SEQUENCE---\n"
                + "Name: " + this.name + "\n"
                + "Seq : " + this.sequence + "\n"
                + "Qual: " + this.quality + "\n";
    }

    public boolean equals(Object other) {
        if (! (other instanceof Sequence)) return false;
        Sequence otherSeq = (Sequence)other;

        if (!this.name.equals(otherSeq.getName())) return false;
        if (!this.sequence.equals(otherSeq.getSequence())) return false;
        if (!this.quality.equals(otherSeq.getQuality())) return false;
        return true;
    }

    public double avgSeqQuality()  {
        double avg = 0.0;
        for (int i = 0; i<quality.length(); i++){
            avg += quality.charAt(i);
        }
        return avg / quality.length();
    }

    public static List<Sequence> loadFromFile(String path) throws FileNotFoundException {
        List<Sequence> list = new ArrayList<>();
        Scanner sc = new Scanner(new File(path));
        String line = sc.nextLine();
        String nam = null;
        String seq = null;
        String qual = null;
        int i = 1;
        while (line != null){
            if (i == 1){
                nam = line.split("@")[1];
            }
            else if (i==2){
                seq = line;
            }
            else if (i==4){
                qual = line;
                list.add(new Sequence(nam, seq, qual));
                i=0;
            }
            line = sc.nextLine();
            i++;
        }
        sc.close();
        return list;
    }

    //dir dodatak
    public double getGCContent(){
        String line = this.getSequence();
        double k = 0.0;
        for (int i = 0; i<line.length(); i++){
            char c = line.charAt(i);
            if (c=='G' || c=='C' || c=='c' || c=='g'){
                k++;
            }
        }
        return k / line.length();
    }

}
