import { useEffect, useState } from "react";
const Counter=()=>{
    const [counter,setcounter]=useState(0);
         const Increment=()=>{
        setcounter((prev)=>prev+1);
    }

    useEffect(()=>{
    document.title=`Counter is ${counter}`;
        console.log("Counter updated:", counter);
    },[counter])
    return (
        <div>
      <h1>{counter}</h1>
      <button className ="border-2 border-indigo-600 cursor-pointer"onClick={Increment}>INCREASE</button>
        </div>
    )
}
export default Counter;