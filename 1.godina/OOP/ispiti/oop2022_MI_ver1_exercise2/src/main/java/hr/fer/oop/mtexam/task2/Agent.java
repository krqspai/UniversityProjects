package hr.fer.oop.mtexam.task2;

abstract class Agent {
    private String name;
    final private int ID;

    Agent(String name, int ID) {
        this.name = name;
        this.ID = ID;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    abstract public String getAgentType();

    public int getID() {
        return ID;
    }

    public String toString(){
        return "(name: " + name + ", id: " + ID + ")";
    }
}
