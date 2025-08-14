import arrow from '../../Assets/arrow_btn.png';
import pause from '../../Assets/pause_icon.png';
import plays from '../../Assets/play_icon.png';


const Hero=({herodata, play, setplay, setcountimage,countimage})=>{
  const handle = () => {
    if (countimage < 2) {
      setcountimage(countimage + 1);
    } else {
      setcountimage(0);   
    }
  }
    return(
    <div className="">
            <div className='absolute top-40 left-50 text-blue flex flex-col items-center justify-center'>
            <p className="bg-gray-300 bg-clip-text text-transparent text-7xl font-bold">{herodata.text1}</p>
            <br />
            <p className="bg-gray-300 bg-clip-text text-transparent text-7xl font-bold">{herodata.text2}</p>
            </div>
            <div className='absolute border-2 text-xl cursor-pointer  backdrop-blur-md text-black gap-3 flex rounded-full ml-5 items-center py-2  bottom-40 bg-white/90 px-5'>
                   <p>Explore the features</p>
                 <img src={arrow} onClick={handle}alt="" className='w-[50px]' />
            </div>
          <div>
  <ul className="flex gap-2 absolute bottom-20 left-1/2 -translate-x-1/2">
    {[0, 1, 2].map((index) => (
      <li
        key={index}
        onClick={() => setcountimage(index)}
        className={`w-4 h-4 rounded-full cursor-pointer transition-all duration-300 
        ${countimage === index ? "bg-white scale-135" : "bg-orange-400"}`}
      ></li>
    ))}
  </ul>
</div>
            <div className='flex items-center gap-4 absolute bottom-10 right-10 border rounded-full text-2xl text-white px-2  py-2 backdrop-blur-md bg-black/10 hover:bg-black/30 cursor-pointer'>
              <img
                src={play ? pause : plays}
                alt="Play/Pause"
                className="cursor-pointer w-[60px] h-[50px] object-contain"
                onClick={() => setplay(!play)}
              />
              <span>See video</span>
            </div>
    </div>
    )
}
export default Hero; 