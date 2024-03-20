//
//  ev1.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct ev1: View {
    var body: some View {
        VStack{
            
            Image("ev1")
            
            
            Text("2만원 이상 자동 충전 이벤트")
                .fixedSize()
                .padding(.trailing, 80.0)
        }
    }
}

struct ev1_Previews: PreviewProvider {
    static var previews: some View {
        ev1()
    }
}
