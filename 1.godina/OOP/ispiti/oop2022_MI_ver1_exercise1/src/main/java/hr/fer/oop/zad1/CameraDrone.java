package hr.fer.oop.zad1;

import java.util.Arrays;

class CameraDrone extends Aircraft implements Unmanned{
    final private int range;
    private int[] qualities;

    public CameraDrone(String model, String dateProduced, int range, int[] qualities) {
        super(model, dateProduced);
        this.range = range;
        this.qualities = qualities;
    }

    public int getRange() {
        return range;
    }

    public int[] getQualities() {
        return qualities;
    }

    public void setQualities(int[] qualities) {
        this.qualities = qualities;
    }

    @Override
    public double coverArea(Number height) {
        return (double)height * range;
    }

    @Override
    public Status aircraftStatus() {
        double x = 0;
        for (int i = 0; i < qualities.length; i++){
            x += qualities[i];
        }
        x = x / qualities.length;
        if (x > 70) {
            return Status.FUNCTIONAL;
        } else if (x >= 50 && x <= 70) {
            return Status.NEED_CHECK;
        } else {
            return Status.OUT_OF_SERVICE;
        }
    }

    @Override
    public String toString() {
        return super.toString() + String.format(" and has %d elements.", qualities.length);
    }
}
