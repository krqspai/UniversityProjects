package hr.fer.oop.zad3;

public class Printer {
    static int size;
    public static String printVideoList(MyList<Video> list){
        StringBuilder sb = new StringBuilder();
        size = list.size();
        for (int i = 0; i<size; i++){
            Video vid = list.elementAt(i);
            sb.append(vid.getTitle()).append(" - ").append(vid.getLength()).append(" sec. - ").append(vid.getFormat()).append("\n");
        }
        return sb.toString();
    }

    public static String printAudioList(MyList<? extends Audio> list){
        StringBuilder sb = new StringBuilder();
        size = list.size();
        for (int i = 0; i<size; i++){
            Audio aud = list.elementAt(i);
            sb.append(aud.getTitle()).append(" - ").append(aud.getLength()).append(" sec. - ").append(aud.getCodec()).append("\n");
        }
        return sb.toString();
    }
}
