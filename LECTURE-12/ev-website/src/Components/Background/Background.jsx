import video1 from '../../Assets/video1.mp4';
import image1 from '../../Assets/image1.png'
import image2 from '../../Assets/image2.png';
import image3 from '../../Assets/image3.png';
const Background=({play,count})=>{
   
    if(play){
        return (
            <video autoPlay loop muted className='w-screen h-screen object-cover zin-[-1] '>
                <source src={video1} type="video/mp4" /></video>
        );
    }
    else if(count===0 ){ 
        return <img src={image1} alt="" className='w-screen h-screen object-cover ' />
    }
    else if(count===1){
        return <img src={image2} alt="" className='w-screen h-screen object-cover ' />
    }
    else{   
      return <img src={image3} alt="" className='w-screen h-screen object-cover '/>
    }
  
}
export default Background; 