//
//  main.cpp
//  Graphs Master Project
//
//  Created by Teja  on 4/29/19.
//  Copyright © 2019 Teja . All rights reserved.
//

#include <iostream>
#include <vector>
#include "Graph.h"

using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    
    // creates a graph
    graph g;
    
//-------------------------------------------------------------------------------------------------------------
    // adding edge, giving info like starting vertex, ending vertex and assigning "weight"
    // need to figure out what weight exactly does
    // FILE "EX1A"
    /*g._add_edge("a b");
    g._add_edge("a c");
    g._add_edge("a d");
    g._add_edge("b d");
    g._add_edge("c d");
    g._add_edge("d e");
    g._add_edge("d f");
    g._add_edge("d g");
    g._add_edge("e g");
    g._add_edge("f g");*/
//--------------------------------------------------------------------------------------------------------------
    
    // FILE:- "ladder10.txt"
    // Doesn't work
    
    /*
     g._add_edge ("a1 a2 660");
     g._add_edge ("a1 b2 182");
     g._add_edge ("b1 b2 872");
     g._add_edge ("b1 a2 973");
     g._add_edge ("a2 a3 413");
     g._add_edge ("a2 b3 176");
     g._add_edge ("b2 b3 103");
     g._add_edge ("b2 a3 576");
     g._add_edge ("a3 a4 192");
     g._add_edge ("a3 b4 355");
     g._add_edge ("b3 b4 260");
     g._add_edge ("b3 a4 579");
     g._add_edge ("a4 a5 882");
     g._add_edge ("a4 b5 449");
     g._add_edge ("b4 b5 659");
     g._add_edge ("b4 a5 100");
     g._add_edge ("a5 a6 821");
     g._add_edge ("a5 b6 557");
     g._add_edge ("b5 b6 804");
     g._add_edge ("b5 a6 122");
     g._add_edge ("a6 a7 585");
     g._add_edge ("a6 b7 8");
     g._add_edge ("b6 b7 650");
     g._add_edge ("b6 a7 3");
     g._add_edge ("a7 a8 63");
     g._add_edge ("a7 b8 792");
     g._add_edge ("b7 b8 105");
     g._add_edge ("b7 a8 204");
     g._add_edge ("a8 a9 159");
     g._add_edge ("a8 b9 217");
     g._add_edge ("b8 b9 402");
     g._add_edge ("b8 a9 176");
     g._add_edge ("a9 a10 214");
     g._add_edge ("a9 b10 650");
     g._add_edge ("b9 b10 65");
     g._add_edge ("b9 a10 848");
    */
    
//---------------------------------------------------------------------------------------------------------------
    
    // FILE:- "chain10.txt"
    // does work
    
    /*
     g._add_edge ("v1 v2 385");
     g._add_edge ("v1 v3 388");
     g._add_edge ("v1 v5 369");
     g._add_edge ("v1 v9 451");
     g._add_edge ("v2 v3 671");
     g._add_edge ("v2 v4 305");
     g._add_edge ("v2 v6 313");
     g._add_edge ("v2 v10 568");
     g._add_edge ("v3 v4 454");
     g._add_edge ("v3 v5 719");
     g._add_edge ("v3 v7 578");
     g._add_edge ("v4 v5 392");
     g._add_edge ("v4 v6 844");
     g._add_edge ("v4 v8 887");
     g._add_edge ("v5 v6 772");
     g._add_edge ("v5 v7 77");
     g._add_edge ("v5 v9 101");
     g._add_edge ("v6 v7 303");
     g._add_edge ("v6 v8 832");
     g._add_edge ("v6 v10 92");
     g._add_edge ("v7 v8 961");
     g._add_edge ("v7 v9 298");
     g._add_edge ("v8 v9 738");
     g._add_edge ("v8 v10 458");
     g._add_edge ("v9 v10 472");
     */
    
    
//---------------------------------------------------------------------------------------------------------------
    
    // FILE :- "aladder.txt"
    // doesn't work
    
    ///*
     g._add_edge ("a1 a2 1");
     g._add_edge ("a2 a3 .4");
     g._add_edge ("a3 a4 .03");
     g._add_edge ("a4 a5 .002");
     
     g._add_edge ("b1 b2 2");
     g._add_edge ("b2 b3 .1");
     g._add_edge ("b3 b4 .04");
     g._add_edge ("b4 b5 .003");
     
     g._add_edge ("a1 b2 3");
     g._add_edge ("a2 b3 .2");
     g._add_edge ("a3 b4 .01");
     g._add_edge ("a4 b5 .004");
     //*/
    
// --------------------------------------------------------------------------------------------------------------
    
     // FILE :- "chain20.txt"
    // doesn't work
    
     /*
     g._add_edge ("v1 v2 385");
     g._add_edge ("v1 v3 388");
     g._add_edge ("v1 v5 369");
     g._add_edge ("v1 v9 451");
     g._add_edge ("v2 v3 671");
     g._add_edge ("v2 v4 305");
     g._add_edge ("v2 v6 313");
     g._add_edge ("v2 v10 568");
     g._add_edge ("v3 v4 454");
     g._add_edge ("v3 v5 719");
     g._add_edge ("v3 v7 578");
     g._add_edge ("v4 v5 392");
     g._add_edge ("v4 v6 844");
     g._add_edge ("v4 v8 887");
     g._add_edge ("v5 v6 772");
     g._add_edge ("v5 v7 77");
     g._add_edge ("v5 v9 101");
     g._add_edge ("v6 v7 303");
     g._add_edge ("v6 v8 832");
     g._add_edge ("v6 v10 92");
     g._add_edge ("v7 v8 961");
     g._add_edge ("v7 v9 298");
     g._add_edge ("v8 v9 738");
     g._add_edge ("v8 v10 458");
     g._add_edge ("v9 v10 472");
      */
    
    
    
//---------------------------------------------------------------------------------------------------------------
    
    // FILE:- "ladder20.txt"
    // doesn't work
    
     /*
     g._add_edge ("a3 b4 997");
     g._add_edge ("b3 b4 675");
     g._add_edge ("b3 a4 238");
     g._add_edge ("a4 a5 233");
     g._add_edge ("a4 b5 558");
     g._add_edge ("b4 b5 12");
     g._add_edge ("b4 a5 206");
     g._add_edge ("a5 a6 268");
     g._add_edge ("a5 b6 399");
     g._add_edge ("b5 b6 353");
     g._add_edge ("b5 a6 885");
     g._add_edge ("a6 a7 978");
     g._add_edge ("a6 b7 255");
     g._add_edge ("b6 b7 771");
     g._add_edge ("b6 a7 234");
     g._add_edge ("a7 a8 788");
     g._add_edge ("a7 b8 336");
     g._add_edge ("b7 b8 7");
     g._add_edge ("b7 a8 373");
     g._add_edge ("a8 a9 899");
     g._add_edge ("a8 b9 801");
     g._add_edge ("a1 a2 311");
     g._add_edge ("a1 b2 391");
     g._add_edge ("b1 b2 609");
     g._add_edge ("b1 a2 231");
     g._add_edge ("a2 a3 331");
     g._add_edge ("a2 b3 113");
     g._add_edge ("b2 b3 465");
     g._add_edge ("b2 a3 942");
     g._add_edge ("a3 a4 949");
     g._add_edge ("b8 b9 428");
     g._add_edge ("b8 a9 253");
     g._add_edge ("a9 a10 194");
     g._add_edge ("a9 b10 486");
     g._add_edge ("b9 b10 852");
     g._add_edge ("b9 a10 174");
     g._add_edge ("a10 a11 623");
     g._add_edge ("a10 b11 570");
     g._add_edge ("b10 b11 105");
     g._add_edge ("b10 a11 968");
     g._add_edge ("a11 a12 61");
     g._add_edge ("a11 b12 947");
     g._add_edge ("b11 b12 290");
     g._add_edge ("b11 a12 365");
     g._add_edge ("a12 a13 965");
     g._add_edge ("a12 b13 248");
     g._add_edge ("b12 b13 480");
     g._add_edge ("b12 a13 617");
     g._add_edge ("a13 a14 941");
     g._add_edge ("a13 b14 529");
     g._add_edge ("b13 b14 351");
     g._add_edge ("b13 a14 288");
     g._add_edge ("a14 a15 496");
     g._add_edge ("a14 b15 407");
     g._add_edge ("b14 b15 918");
     g._add_edge ("b14 a15 920");
     g._add_edge ("a15 a16 358");
     g._add_edge (" a15 b16 749");
     g._add_edge (" b15 b16 52");
     g._add_edge (" b15 a16 236");
     g._add_edge ("a16 a17 963");
     g._add_edge ("a16 b17 721");
     g._add_edge ("b16 b17 611");
     g._add_edge ("b16 a17 200");
     g._add_edge ("a17 a18 626");
     g._add_edge ("a17 b18 148");
     g._add_edge ("b17 b18 256");
     g._add_edge ("b17 a18 58");
     g._add_edge ("a18 a19 19");
     g._add_edge ("a18 b19 969");
     g._add_edge ("b18 b19 70");
     g._add_edge ("b18 a19 481");
     g._add_edge ("a19 a20 927");
     g._add_edge ("a19 b20 65");
     g._add_edge ("b19 b20 237");
     g._add_edge ("b19 a20 285");
     */
    
    
    
    
    
    
//---------------------------------------------------------------------------------------------------------------
    
    // beginning of toy
   
    g.display();
    vector<string> paths;
    bool pathexist = g.enum_paths("b5", paths);
    cout<<pathexist<<endl;
    cout<<"paths are: "<<endl;
    for(int i=0;i<paths.size();i++)
        cout<<paths[i]<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}

