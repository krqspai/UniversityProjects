package hr.fer.oop.ljir.zad2;

import java.util.Comparator;

public class PlayerComparator implements Comparator<FootballPlayer> {
    @Override
    public int compare(FootballPlayer o1, FootballPlayer o2) {
        int rez = Integer.compare(o1.getOverallSkill(), o2.getOverallSkill());
        if (rez!=0) return rez;

        rez = o1.getSurname().compareTo(o2.getSurname());
        if (rez!=0) return rez;

        return o1.getName().compareTo(o2.getName());
    }
}
