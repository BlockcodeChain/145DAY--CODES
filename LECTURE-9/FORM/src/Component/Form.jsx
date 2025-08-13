import React from 'react'

const Form = () => {
    function Submit(e){
e.preventDefault();   //isse reload nhi hoga
        alert("Form Submitted");
console.log("hiii")
    }
    return (
        <div className='form'>
           <input type="text" placeholder=" Enter Your Name"  /> 
           <br /><br /><br />
           <input type="text" placeholder="Enter Email" />
           <br /><br />
           <button onClick={Submit}>SUBMIT</button>
        </div>
    )
}

export default Form
