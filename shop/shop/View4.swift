//
//  View4.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct View4: View {
    var body: some View {
        VStack
        {
            VStack{
                Button(action: {
                print("Hello")},
                    label: {
                    Text("전체보기")
                     .foregroundColor(Color.black)
                     .padding(.leading, 320.0)
                     .offset(y: 31)
                        })
                
                
                
                
                
                
                Text("이벤트")
                    .font(.title2)
                    .padding(.trailing, 310.0)
                    .offset(y: 5)
                
            }
            
            ScrollView(.horizontal){
                HStack(spacing: 0){
                    
                    ev1()
                    ev2()
                    ev3()
                    
                }
            }
        }
    }
}

struct View4_Previews: PreviewProvider {
    static var previews: some View {
        View4()
    }
}
