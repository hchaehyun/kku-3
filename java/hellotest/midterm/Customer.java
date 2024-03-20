// 202023615_함채현_Java프로그래밍2(8765)_4주차과제

import java.util.*;

class CPoint{
    String name;
    int point;

    public CPoint(String name, int point){
        this.name = name;
        this.point = point;
    }


    public String toString(){
        return "[ " + name + " " + point + " ]";
    }

    public boolean equals(Object o){
        CPoint c = (CPoint) o;
        if(name.equals(c.name)){
            return true;
        }
        else return false;
    }

    public void sumPoint(int point){
        this.point = this.point + point;
    }
}

public class Customer {
    public static void main(String[] args){
        
        Vector<CPoint> v = new Vector<CPoint>();
        Scanner sc = new Scanner(System.in);

        while(true){
            System.out.print("이름과 포인트 입력> ");

            String name = sc.next();
            int point = sc.nextInt();

            if(v.contains(new CPoint(name, point)) == false){ //배열에 이름 일치하는거 없으면
                v.add(new CPoint(name, point)); //이름이랑 포인트 다 배열에 넣기
            }
            else{// 배열에 일치하는 이름 있으면
                for(int i = 0; i < v.size(); i++){ // 배열 사이즈만큼 ++
                    if(v.get(i).name.equals(name)){ // 배열 삭제하고 포인트 추가된 배열 다시 넣기
                        String name2 = v.get(i).name;
						int point2 = v.get(i).point;
                        v.remove(i);
                        v.add(i, new CPoint(name2, point2+point));
                    }
                }
            }
            for(int i = 0; i < v.size(); i++){ // 출력
                CPoint c = v.get(i);
                System.out.println(c.toString());
            }
            }
        }

    }
    

