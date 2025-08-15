import { useState,useRef} from "react";
import { IoSunnyOutline } from "react-icons/io5";
import { MdOutlineDarkMode } from "react-icons/md";
import img from '../../Assest/photo-generator.webp'
const Search=()=>{
    const [dark ,setdark]=useState(false);
const change=()=>{
    document.documentElement.classList.toggle("dark");
    setdark(!dark)
}
    // const[images,setimages]=useState('/');
    let inputref=useRef(null)
    // const imagegenrator=()=>{
    //     if(inputref.current.value=="")
    //         return 0;
    // }

return (
    <>
    <div className='absolute top-40 left-[40%] w-90 h-90 rounded-md backdrop-filter shadow-gray-100 rounded-full'>
    {/* <img src={images==='/'?img:images} alt="" className='object-cover rounded' /> */}
    <img src={img} alt="" />
    </div>
    <div className="absolute flex items-center justify-between bottom-10 border-2  rounded-full left-100 w-[50%]">
        <input type="text" ref={inputref} placeholder="IMAGE DESCRIPTION 📸 kaisi image chaihye ..." className="flex items-center bg-linear-to-r/srgb from-indigo-700 to-teal-300 to-purple-400 bg-clip-text font-extrabold text-transparent text-xl text-center justify-center p-6 w-[100%] rounded-l-full outline-none " />
        <div className="flex items-center justify-center p-2 cursor-pointer">
            <button className="border-3 p-3 rounded-full mr-3 font-bold cursor-pointer text-xl bg-gray-300/20 hover:bg-red-500/10">Generate</button>
        <button onClick={change} className="border rounded-full cursor-pointer p-1 font-bold  " >{dark?<IoSunnyOutline  className="w-8 h-8"/>:<MdOutlineDarkMode className="w-8 h-8"/>}</button>
        </div>
    </div>
    </>
)
}
export default Search