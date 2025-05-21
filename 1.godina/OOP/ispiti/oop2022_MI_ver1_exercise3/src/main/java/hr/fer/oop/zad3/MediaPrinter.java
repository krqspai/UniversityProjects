package hr.fer.oop.zad3;

public class MediaPrinter<E extends Media> extends PrintableList<E> {

    @Override
    public String print(){
        StringBuilder sb = new StringBuilder();
        int size = size();
        for (int i = 0; i < size; i++){
            Media m = elementAt(i);
            sb.append(m.getTitle()).append(" is ").append(m.getLength()).append(" seconds long.\n");
        }
        return sb.toString();
    }
}
