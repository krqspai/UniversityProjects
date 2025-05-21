package hr.fer.oop.t2.loaders;

public class NoDataException extends Exception {
    public NoDataException(String message){
        super(message);
    }

    public NoDataException(Exception e){
        super(e);
    }
}
