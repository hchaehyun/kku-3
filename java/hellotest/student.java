import java.io.Serializable;

public class student implements Serializable{
    private String name;
    private String stnumber;
    private String phnumber;

    public student(String name, String stnumber, String phnumber){
        this.name = name;
        this.stnumber = stnumber;
        this.phnumber = phnumber;
    }

    @Override
    public String toString(){
        return String.format("name: %s, stnumber: %s, phnumber: %s", name, stnumber, phnumber);
    }

    
}
