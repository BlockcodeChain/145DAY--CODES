const Nav=()=>{
    return(
    <div className="nav w-screen h-16 absolute top-3 text-white bg-transparent flex items-center justify-between px-4">
    <h1 className="text-5xl font-bold"><span className="text-orange-500 text-6xl font-extrabold">EV</span>-olution</h1>
    <ul className="flex items-center gap-6 text-xl cursor-pointer ">
        <li className="hover:underline hover:text-orange-400 ">HOME</li>
        <li className="hover:underline hover:text-orange-400 ">Explore</li>
        <li className="hover:underline hover:text-orange-400 ">About</li>
        <li className="rounded-full font-semibold border hover:underline hover:text-orange-400 bg-white text-black px-2 py-1 text-md">CONTACT</li>
    </ul>
    </div>
    )
}
export default Nav; 