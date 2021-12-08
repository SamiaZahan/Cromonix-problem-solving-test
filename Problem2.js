let report = [
    [0,0,1,0,0],
    [1,1,1,1,0],
    [1,0,1,1,0],
    [1,0,1,1,1],
    [1,0,1,0,1],
    [0,1,1,1,1],
    [0,0,1,1,1],
    [1,1,1,0,0],
    [1,0,0,0,0],
    [1,1,0,0,1],
    [0,0,0,1,0],
    [0,1,0,1,0]
];

let gamma="";
let epsilon="";

//Calculating Gamma and Epsilon

for(let i=0; i<5; i++){
    let count_0 = 0 ;
    let count_1 = 0 ;
    for(let j=0; j<report.length; j++){
        (report[j][i] == 0)? count_0 ++ : count_1 ++;
    }
    if(count_0 > count_1){
        gamma= gamma.concat(0);
        epsilon= epsilon.concat(1);
        
    }
    else{
        gamma= gamma.concat(1);
        epsilon= epsilon.concat(0);
        
    }
}
gamma= parseInt(gamma,2);
epsilon= parseInt(epsilon,2)
console.log("Gamma: "+gamma);
console.log("Epsilon: "+epsilon);
console.log("power Consumption: "+(gamma*epsilon))



