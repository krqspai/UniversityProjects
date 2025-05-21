package hr.fer.oop.zad1;

class Plane extends Aircraft{
    private int capacity;
    private int[] motorsStatus;

    public Plane(String model, String dateProduced, int capacity, int[] motorsStatus) {
        super(model, dateProduced);
        this.capacity = capacity;
        this.motorsStatus = motorsStatus;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    public int[] getMotorsStatus() {
        return motorsStatus;
    }

    public void setMotorsStatus(int[] motorsStatus) {
        this.motorsStatus = motorsStatus;
    }

    @Override
    public Status aircraftStatus() {
        int a = 0, b = 0;
        for (int i = 0; i < motorsStatus.length; i++){
            if (motorsStatus[i] < 100) {
                a+=1;
            }
            if (motorsStatus[i] < 80) {
                b+=1;
            }
        }
        if (b>0) {
            return Status.OUT_OF_SERVICE;
        } else if (a>0) {
            return Status.NEED_CHECK;
        } else {
            return Status.FUNCTIONAL;
        }
    }

    @Override
    public String toString() {
        return super.toString() + String.format(" and has %d motors and capacity of %d.", motorsStatus.length, capacity);
    }
}
