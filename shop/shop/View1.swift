//
//  bgc2.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct view1: View {
    var body: some View {
        VStack{
            
            Text("  안녕하세요\n  커피박물관 카페뮤제오입니다") // 인삿말
                .font(.title)
                .multilineTextAlignment(.center)
                .background(bgc())
                .padding(.top, 10.0)
                .offset(y: -26) // 인삿말 이동
            
            Text("카페뮤제오의 회원이 되시면\n다양한 혜택을 받으실 수 있습니다")
                .multilineTextAlignment(.center)
                .padding(5.0) //부 인삿말
                .offset(y: -36) //부 인삿말 이동

            
            
            Logo()
                .offset(y: -210) // 로고 이동
        }.offset(y: -5) // 전체 이동
        
        

    }
}
struct view1_Previews: PreviewProvider {
    static var previews: some View {
        view1()
    }
}
