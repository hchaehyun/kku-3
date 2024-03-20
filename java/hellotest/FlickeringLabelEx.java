import java.awt.*;
import javax.swing.*;

class FlickeringLabel extends JLabel implements Runnable {

    private long delay;
    private int start;
    
    public FlickeringLabel(String text, long delay, int start){
        super(text);
        this.delay = delay; 
        this.start = start;
        
   
        setOpaque(true);
        Thread th = new Thread(this); 
        th.start();
        // 레이블 생성자에 매개변수 하나 추가, 0부터 시작인지 1부터 시작인지. 
        // 0부터 시작하면 노란색, 1부터 시작하면 초록색
    }

    @Override
    public void run() {
        
        while(true) {
            if(start == 0) 
                setBackground(Color.YELLOW);
            else 
                setBackground(Color.GREEN);

            if(start == 0)
                start = 1; 
                
            
            else 
                start = 0;
                
            
                
            try {
                Thread.sleep(delay);
                
                 
            }
            catch(InterruptedException e) {
                return; 
            }
        } 
    }
}

public class FlickeringLabelEx extends JFrame {
    public FlickeringLabelEx() {
        setTitle("FlickeringLabelEx2"); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        // 깜박이는 레이블 생성
        FlickeringLabel fLabel = new FlickeringLabel("건국대학교",500, 0);
        // 깜박이는 레이블 생성
        FlickeringLabel fLabel2 = new FlickeringLabel("소프트웨어전공",500,1);
        
        c.add(fLabel); 
        c.add(fLabel2);

        setSize(300,150);
        setVisible(true); 
    }
    public static void main(String[] args) {
    new FlickeringLabelEx(); 
    }
}