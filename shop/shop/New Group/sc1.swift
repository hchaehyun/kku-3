//
//  sc1.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct sc1: View {
    var body: some View {
        VStack{
            Image("sc1")
                .resizable()
                .frame(width: 400, height: 250)
                .aspectRatio(contentMode: .fit)
            
                Text("시즌 베이커리")
                .fixedSize()
                .padding(.trailing, 280.0)
        }
    }
}

struct sc1_Previews: PreviewProvider {
    static var previews: some View {
        sc1()
    }
}
