
var  i = 0, 
     f = 0, 
    p1 = 0,
p1name = prompt("Name of first player"),
p2name = prompt("Name of second player"),
    p2 = 0,
played = 0,
p1sign = "O",
p2sign = "X",
  cPos = [[0, 1, 2],
          [0, 3, 6],
          [0, 4, 8],
          [1, 4, 7],
          [2, 4, 6],
          [2, 5, 8],
          [3, 4, 5],
          [6, 7, 8]],

 b = document.getElementsByTagName('button');

 if ( p1name == null || p1name.trim() == "")
     
     p1name = "Player 1"
 
 if ( p2name == null || p2name.trim() == "")
     
     p2name = "Player 2"
 
 window.onload = function(){
 
     var s1 = document.getElementById("le"),
         s2 = document.getElementById("re")
 
     s1.innerText = p1name + ": " + p1
     
     s2.innerText = p2name + ": " + p2
     
 }

function clean(){

    for ( z = 0; z<b.length - 3; z++ ){
    
        b[z].innerText = ""
        
        b[z].style.background = "#fff"
        
    }
    
    i = f = 0
}

function putox(n){
    
    if ( i > 8 || f == 1)
        
        return
    
    if ( i == 8 )
    
        played += (played == 0) ? 1 : 0;
        
    
    if (b[n].innerText == ""){
        
        if ( i % 2 == 0 )
            
            b[n].innerText = p1sign
        
        else
            
            b[n].innerText = p2sign
        
        i++
        
        for ( g = 0; g < cPos.length; g++ ){
           
           if( b[cPos[g][0]].innerText != ''
               &&
               b[cPos[g][1]].innerText != ''
               &&
               b[cPos[g][2]].innerText != ''
               ){
                
                if (
               b[cPos[g][0]].innerText == 
               b[cPos[g][1]].innerText
               &&
               b[cPos[g][1]].innerText ==
               b[cPos[g][2]].innerText
                ){
                played += (played == 0) ? 1 : 0;
                for ( k = 0; k < 3; k++ )
                
                    b[cPos[g][k]].style.background = "#ff9"
                
                
                if ( i % 2 != 0 ){
                    p1++;
                    var s1 = document.getElementById("le")
                    s1.innerText = p1name + ": " + p1
                }else{
                    p2++;
                    var s2 = document.getElementById("re")
                    s2.innerText = p2name + ": " + p2
                    }
                setTimeout(clean, 500);
                f = 1;
                break;
            }
        }
        
    }
    }
    
    if( i == 9 )
        setTimeout(clean, 300);
}


function result(){
    
    if ( played  == 0 ){
        alert("Not played any game yet")
        return
    }
    
    if ( p1 > p2 )
        alert(p1name+" Won —> "+p1+" - "+p2)
    else if ( p1 < p2 )
        alert(p2name+" Won —> "+p2+" - "+p1)
    else
        alert("Draw!")
        
}

function restart(){
    
    clean();
    
    p1 = 0;
    p2 = 0;
    played = 0;
    
    var s1 = document.getElementById("le");
    s1.innerText = p1name +": " + p1;
    
    var s2 = document.getElementById("re");
    s2.innerText = p2name +": " + p2;
    
        }
