//
//  sc2.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct sc2: View {
    var body: some View {
        VStack{
            Image("sc2")
                .resizable()
                .frame(width: 400, height: 250)
                .aspectRatio(contentMode: .fit)
            
                Text("시즌 음료")
                .fixedSize()
                .padding(.trailing, 310.0)
            
        }
    }
}

struct sc2_Previews: PreviewProvider {
    static var previews: some View {
        sc2()
    }
}
