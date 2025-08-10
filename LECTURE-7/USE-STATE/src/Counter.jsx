import React from 'react'
import { useState } from 'react'
const Counter = () => {
    const [value ,setvalue]=useState(0);
    function Decrease()
    {

    // setvalue((prev)=>(prev-1));\
    setvalue((value)=>(
        value++
    ))
    }
    function Increase()
    {
        
        setvalue((prev)=>(prev+1))
        
    }
    return (
        <div>
            <h1>COUNTER APP</h1>
            <button onClick={Increase}>INCREASE</button>
            <h3>{value}</h3>
            <button onClick={Decrease}>DECREASE</button>
        </div>
    )
}

export default Counter
