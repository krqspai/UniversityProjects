package hr.fer.oop.pair;

import java.util.*;

class SimplePairHashSet implements Iterable<Pair>{
    private Map<Pair, Object> internalMap;

    public SimplePairHashSet(){
        this.internalMap = new HashMap<>();
    }

    public boolean add(Pair p){
        internalMap.put(p, new Object());
        return true;
    }

    public Map<Pair, Object> getInternalMap() {
        return internalMap;
    }

    public int size(){
        return internalMap.size();
    }

    public boolean contains(Object o){
        return internalMap.containsKey(o);
    }

    public boolean remove(Object o){
        boolean exists = internalMap.containsKey(o);
        internalMap.remove(o);
        return exists;
    }

    @Override
    public Iterator<Pair> iterator() {
        return internalMap.keySet().iterator();
    }
}
