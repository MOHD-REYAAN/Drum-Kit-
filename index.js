var audio = new Audio("sounds/crash.mp3");
for(var i=0;i<document.querySelectorAll(".drum").length; i++){
document.querySelectorAll(".drum")[i].addEventListener("click",function(){
this.style.color="white";

});}

var numberb=document.querySelectorAll(".drum").length;

for(var i=0; i <numberb; i++){
    document.querySelectorAll(".drum")[i].addEventListener("click", function(){
        var innerhtmlbu = this.innerHTML;
        makesound(innerhtmlbu);
        addanimation(innerhtmlbu);
        
    })
}

document.addEventListener("keypress", function(event){
 makesound(event.key);
 addanimation(event.key);

})

function makesound(key){
    switch (key) {
            case "w":
                var tom1=new Audio("sounds/tom-1.mp3")
                tom1.play();
                break;

            case "a":
                var tom2=new Audio("sounds/tom-2.mp3")
                tom2.play();
                break;

            case "s":
                var tom3=new Audio("sounds/tom-3.mp3")
                tom3.play();
                break;

            case "d":
                var tom4=new Audio("sounds/tom-4.mp3")
                tom4.play();
                break;

            case "j":
                var crash=new Audio("sounds/crash.mp3")
                crash.play();
                break;

            case "k":
                var tomk=new Audio("sounds/kick-bass.mp3")
                tomk.play();
                break;

            case "l":
                var toml=new Audio("sounds/snare.mp3")
                toml.play();
                break;

            default:
                break;
        }
}

function addanimation(key){
    var ad=document.querySelector("."+key);
    ad.classList.add("pressed");
    setTimeout(function(){
        ad.classList.remove("pressed");
    },100);
}



