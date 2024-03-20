// 202023615_함채현_Java프로그래밍2(8765)_5주차과제

import java.util.*;

public class ClubMember {
    public static void main(String[] args){

        String[] computer = {"대찬", "동권", "진석", "수현", "유림", "아현", "용민", "현우", "교선", "민재", "기태"};
        String[] soccer = {"창민", "진석", "희수", "유림", "용민", "현정", "한겅", "민재", "준영", "기태", "동권", "지선"};
        String[] dance = {"지선", "수현", "유림", "용민", "철희", "한겅", "태환", "기태", "서연", "예린", "현우"};
        
        Set<String> computerHashSet = new HashSet<String>(Arrays.asList(computer));
        Set<String> soccerHashSet = new HashSet<String>(Arrays.asList(soccer));
        Set<String> danceHashSet = new HashSet<String>(Arrays.asList(dance));
        
        
        System.out.println("컴퓨터: " + computerHashSet);
        System.out.println("축구: " + soccerHashSet);
        System.out.println("댄스: " + danceHashSet);
        System.out.println();


        // 3개 동아리에 모두 참여하는 학생 명단 
        // == computer, soccer, dance 모두 중복되는 이름
        computerHashSet.retainAll(danceHashSet);
        computerHashSet.retainAll(soccerHashSet);
        System.out.println("3개 동아리 모두 참여 : " + computerHashSet);
        computerHashSet.clear();
        for(String c : computer) computerHashSet.add(c);
        System.out.println();

        // 적어도 1개 이상의 동아리에 참여하는 학생 명단 
        // == (computer + soccer + dance) - 중복되는이름
        computerHashSet.addAll(danceHashSet);
        computerHashSet.addAll(soccerHashSet);
        System.out.println("1개 이상 참여 : " + computerHashSet);
        computerHashSet.clear();
        for(String c : computer) computerHashSet.add(c);
        System.out.println();

        // soccer 또는 dance에 참여하지만, computer에는 참여하지 않는 학생 명단 
        // == (dance - com) + (soccer - com) - 중복
        soccerHashSet.removeAll(computerHashSet);
        danceHashSet.removeAll(computerHashSet);
        soccerHashSet.addAll(danceHashSet);
        System.out.println("computer 참여x : " + soccerHashSet);

        
    }

   
        
       
    
}
    


