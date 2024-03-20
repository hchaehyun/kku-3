//
//  ContentView.swift
//  FindMed
//
//  Created by 함채현 on 2022/11/21.
//

import SwiftUI

struct MainView: View {
    var body: some View {
        
        VStack {
            VStack {
                VStack {
                    HStack {
                        VStack {
                            
                            
                            Button("메뉴") {
                                // 메뉴로 이동
                            }
                            .padding([.leading, .bottom], 20.0)
                        }
                        Spacer()
                        Button("MY") {
                            // 마이페이지로 이동
                        }
                        /*NavigationLink(destination: MyView()) {
                            Text("MyNav")
                        }*/
                        .padding([.bottom, .trailing], 20.0)
                    }
                    VStack {
                        HStack {
                            Button("주변") {
                                // 주변 약국찾기 페이지 이동
                            }
                            .padding(.leading, 20.0)
                            Spacer()
                            Button("심야") {
                                // 심야 약국찾기 페이지 이동
                            }
                            Spacer()
                            Button("휴일") {
                                // 휴일 약국찾기 페이지 이동
                            }
                            Spacer()
                            Button("즐겨찾기") {
                                // 즐겨찾기 페이지 이동
                            }
                            Spacer()
                            Button("커뮤니티") {
                                // 커뮤니티 페이지 이동
                            }
                            .padding(.trailing, 20.0)
                        }
                        
                    }
                    
                    
                }
                
                ScrollView{
                    ScrollView(.horizontal){
                                    HStack{
                                        Banner1()
                                        Banner2()
                                    }
                                    .padding(.leading, 5.0)
                                    .padding(.top, 10.0)
                                
                        }
                    Info1() // 추후 이미지 클릭 시 해당 글로 이동 구현
                        .padding(.top, 10.0)
                    Info2() // 추후 이미지 클릭 시 해당 글로 이동 구현
                    
                        .padding(.top, 10.0)
                }
            }
            HStack {
                Button("이전") {
                    // 이전
                    /*@START_MENU_TOKEN@*//*@PLACEHOLDER=Action@*/ /*@END_MENU_TOKEN@*/
                }
                Button("홈") {
                    /*@START_MENU_TOKEN@*//*@PLACEHOLDER=Action@*/ /*@END_MENU_TOKEN@*/
                }
            }
        }
        
    }
    
}


    
    struct MainView_Previews: PreviewProvider {
        static var previews: some View {
            MainView()
        }
    }

