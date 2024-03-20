//
//  ev3.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct ev3: View {
    var body: some View {
        VStack{
            
            Image("ev3")
            
            
            Text("2022 크리스마스 홀케이크")
                .fixedSize()
                .padding(.trailing, 80.0)
        }
    }
}

struct ev3_Previews: PreviewProvider {
    static var previews: some View {
        ev3()
    }
}
