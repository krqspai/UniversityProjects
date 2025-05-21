package hr.fer.oop.t5;

public class StandardContainer extends Container{
    private StandardContainerType type;

    public StandardContainer(String id, int volume, StandardContainerType type) {
        super(id, volume);
        this.type = type;
    }

    @Override
    public boolean add(int v) {
        if ((getVolume() - getOccupiedVolume() >= v) && (v==20 || v==10 || v==40)){
            setOccupiedVolume(v+getOccupiedVolume());
            return true;
        } else
            return false;
    }
}
