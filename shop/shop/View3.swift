//
//  View3.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct View3: View
{
    var body: some View
    {
        VStack
        {
            Button(action: {
                print("Hello")
            }, label: {
                Image("login")
                    .imageScale(.large)    // 로그인 버튼
            })

            Button(action: {
                        print("Hello")
                    }, label: {
                        Text("회원가입")
                            .foregroundColor(Color.black)
                    })
            
            
        }.padding(.top, -42.0).offset(y: 30)
    }
}

struct View3_Previews: PreviewProvider {
    static var previews: some View {
        View3()
    }
}
