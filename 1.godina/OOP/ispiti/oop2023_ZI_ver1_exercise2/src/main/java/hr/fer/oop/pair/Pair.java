package hr.fer.oop.pair;

import java.util.Objects;

class Pair <A, B>{
    private A first;
    private B second;

    public Pair(A first, B second) {
        this.first = first;
        this.second = second;
    }

    public A getFirst() {
        return first;
    }

    public B getSecond() {
        return second;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Pair<?, ?> pair = (Pair<?, ?>) o;
        return (first.equals(pair.first) && second.equals(pair.second)) || (first.equals(pair.second) && second.equals(pair.first));
    }

    @Override
    public int hashCode() {
        int x = Objects.hash(second, first);
        return Objects.hash(first, second);
    }
}
