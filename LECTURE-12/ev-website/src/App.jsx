import React, { useState } from 'react';
import Background from './Components/Background/Background';
const App=()=>{
  let herodata=[
    {text1:"Dive into", text2:"what you love"},
    {text1:"Indulge", text2:"your passions"},
    {text1:"Give in to ", text2:"your passions"},

  ];
  const [count ,setcount]=useState(2);
  const [play,setplay]=useState(true);
  return (
  <div>
<Background play={play} count={count} />
  </div>
  );
};
export default App;