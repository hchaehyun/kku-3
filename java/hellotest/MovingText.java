import java.awt.*;
import javax.swing.*;

class TimerRunnable2 implements Runnable {
    private JLabel label;
    
    public TimerRunnable2( JLabel label ) {
        this.label = label; 
    }

    @Override
    public void run() {

        String str = 
            "동해물과 백두산이 마르고 닳도록 하느님이 보우하사 우리나라 만세 "
            + "무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세 "
            + "남산 위에 저 소나무 철갑을 두른 듯 바람 서리 불변함은 우리 기상일세 "
            + "무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세 "
            + "가을 하늘 공활한데 높고 구름 없이 밝은 달은 우리 가슴 일편단심일세 "
            + "무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세 "
            + "이 기상과 이 맘으로 충성을 다하여 괴로우나 즐거우나 나라 사랑하세 "
            + "무궁화 삼천리 화려 강산 대한 사람 대한으로 길이 보전하세 ";
        

        while(true) {
            label.setText(str);
            try {
                for(int i = 0; i < str.length() + 1; i++){
                    // text 이동
                    String oldText = label.getText();
                    String newText = oldText.substring(1);
                    label.setText(newText);

                    Thread.sleep( 100 ); 
                    
                }
                 
            }
            catch( InterruptedException e ) {
                return;
            }
        } 
    }
}

public class MovingText extends JFrame {
    
    public MovingText() {
        setTitle( "Moving Text" ); 
        setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
        
        Container c = getContentPane(); 
        c.setLayout( new FlowLayout() );
        
        JLabel label = new JLabel();
        label.setFont( new Font("Gothic", Font.ITALIC, 30) ); 
        c.add( label );
        
        
        setSize( 500, 100 ); 
        setVisible( true );
        // 20자 제한 구현 실패
        
        Thread th = new Thread( new TimerRunnable2( label ) );
        th.start();
        // th.interrupt(); 쓰레드 종료 구현 실패
        
    }
    public static void main( String[] args ) {
    new MovingText(); 
    }
}