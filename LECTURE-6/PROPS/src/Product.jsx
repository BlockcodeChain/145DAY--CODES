import React from 'react'
 // method 1
// const Product = () => {
//     return (
       
//         <div>
//             <h1>Nike Shoes</h1>
//             <h3>Prize: $9.09</h3>

//         </div>

        
//     )
// }


// Method -2 giving props destructuring 
const Product= ({title,prize})=>{
return <>
<h1>{title}</h1>
<h3>Prize:{prize}</h3>

</>
}

export default Product
