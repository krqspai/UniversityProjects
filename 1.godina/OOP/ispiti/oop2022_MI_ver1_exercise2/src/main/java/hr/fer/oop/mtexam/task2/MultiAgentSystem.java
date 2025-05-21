package hr.fer.oop.mtexam.task2;

class MultiAgentSystem {
    private Agent agents[];
    private static int generatedId = -1;

    public MultiAgentSystem(int numberOfAgents){
        if (numberOfAgents < 1) {
            numberOfAgents = 1;
        }
        agents = new Agent[numberOfAgents];
    }

    public int getNumberOfAgents() {
        return agents.length;
    }

    public static int generateId(){
        generatedId += 1;
        return generatedId;
    }

    public Agent[] getAgents() {
        return agents;
    }

    public void addAgent(Agent agent){
        if (agent.getID() < agents.length){
            agents[agent.getID()] = agent;
        }
    }

    public void printSystemInfo() {
        for (int i=0; i<agents.length; i++){
            if(agents[i] != null){
                System.out.println(agents[i].getAgentType() + " " + agents[i].toString());
            }
        }
    }
}
