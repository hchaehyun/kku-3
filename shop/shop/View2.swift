//
//  View2.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct View2: View {
    var body: some View {
        VStack{

            VStack {
                Button(action: {
                            print("Hello")
                        }, label: {
                            Text("전체보기")
                                .foregroundColor(Color.black)
                                .padding(.leading, 320.0)
                                .offset(y: 31)
                                
                            
                        })
                
                
                
                	
                Text(" 새메뉴")
                    .font(.title2)
                    .padding(.trailing, 310.0)
                .offset(y: 5)
            }
            
            
            
            
        
        ScrollView(.horizontal){
            HStack(spacing: 0){
                
                sc1()
                sc2()
                sc3()
                
                }
            }
        }.offset(y: -59) //
    }
}

struct View2_Previews: PreviewProvider {
    static var previews: some View {
        View2()
    }
}
