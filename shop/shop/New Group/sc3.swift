//
//  sc3.swift
//  shop
//
//  Created by LeeJungWON on 2022/12/04.
//

import SwiftUI

struct sc3: View {
    var body: some View {
        VStack{
            Image("sc3")
                .resizable()
                .frame(width: 400, height: 250)
                .aspectRatio(contentMode: .fit)
            
                Text("선물세트")
                .fixedSize()
                .padding(.trailing, 320.0)
            
        }
    }
}

struct sc3_Previews: PreviewProvider {
    static var previews: some View {
        sc3()
    }
}
