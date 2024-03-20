//
//  ev2.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct ev2: View {
    var body: some View {
        VStack{
            
            Image("ev2")
            
            
            Text("텀블러 증정 스탬프 이벤트")
                .fixedSize()
                .padding(.trailing, 80.0)
        }
    }
}

struct ev2_Previews: PreviewProvider {
    static var previews: some View {
        ev2()
    }
}
