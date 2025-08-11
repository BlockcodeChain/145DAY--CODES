import React, { useEffect, useState } from 'react';

const Fetch=()=>{
    const[data,setdata]=useState([]);
     const[name,setname]=useState('');
    
    useEffect(()=>{ 
        const fetchdata=async ()=>{
        const res =await fetch(`https://jsonplaceholder.typicode.com/${name}`)
        let json =await res.json();
        setdata(json);
    }
    fetchdata();
    console.log("Data fetched for:", name);
    },[name]);
return (
<div className='p-4 bg-blue-200 cursor-pointer border-2 border-indigo-200'>
<button  className='p-6 bg-blue-400 cursor-pointer border-4 border-indigo-400' onClick={()=>setname('posts')}>POSTES</button>
<button  className='p-6 bg-blue-400 cursor-pointer border-4 border-indigo-400' onClick={()=>setname('albums')}>ALBUM</button>
<button  className='p-6 bg-blue-400 cursor-pointer border-4 border-indigo-400' onClick={()=>setname('comments')}>COMMENT</button>
<button  className='p-6 bg-blue-400 cursor-pointer border-4 border-indigo-400' onClick={()=>setname('photos')}>PHOTOS</button>
{data.map((item)=>(
<div key={item.id}>
    <h1>{item.title||item.name}</h1>
    </div>
))}
</div>

)
}
export default Fetch;