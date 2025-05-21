package hr.fer.oop.ZI2023;

import java.io.File;
import java.io.IOException;
import java.nio.file.FileVisitResult;
import java.nio.file.Path;
import java.nio.file.SimpleFileVisitor;
import java.nio.file.attribute.BasicFileAttributes;

public class MyFileVisitor extends SimpleFileVisitor<Path> {
    private String[] extens;
    private int numFiles;
    private int numFolders;
    private long largestFileSize;

    public MyFileVisitor(String[] extensions){
        extens = extensions;
        this.numFiles = 0;
        this.numFolders = 0;
        this.largestFileSize = 0;
    }

    @Override
    public FileVisitResult preVisitDirectory(Path dir, BasicFileAttributes attrs) throws IOException {
        numFolders++;
        return FileVisitResult.CONTINUE;
    }

    @Override
    public FileVisitResult visitFile(Path file, BasicFileAttributes attrs) throws IOException {
        for (String ext : extens) {
            if (file.toString().endsWith(ext)) {
                numFiles++;
                if (attrs.size()>largestFileSize){
                    largestFileSize = attrs.size();
                }
            }
        }
        return FileVisitResult.CONTINUE;
    }

    public int getNumFiles(){
        return numFiles;
    }

    public int getNumFolders(){
        return numFolders;
    }

    public long getLargestFileSize(){
        return largestFileSize;
    }
}
