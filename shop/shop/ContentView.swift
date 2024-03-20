//
//  ContentView.swift
//  shop
//
//  Created by LeeJungWON on 2022/11/21.
//

import SwiftUI

struct ContentView: View
{
    
    var body: some View
    {
        VStack
        {
            
            ScrollView
            {
                view1()
                    .padding(.top, 50.0) // 로고는 나중에 변경하기
                
                View2()
                    .padding(/*@START_MENU_TOKEN@*/.bottom, -60.0/*@END_MENU_TOKEN@*/)
                     // 스크롤뷰 자동 화면 전환 알아보기
                    // 전체보기 터치 손보기
                
                
                View4()
            }
            
            View3()
                .padding(/*@START_MENU_TOKEN@*/.top, 40.0/*@END_MENU_TOKEN@*/) // 로그인 및 회원가입
                // 공간 디게 안이쁘네
                 
            
        }
        .padding(.bottom, 23.0)
    }
}


struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
