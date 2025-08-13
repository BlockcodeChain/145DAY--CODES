import React from 'react'

import './Card.css'
const Card = ({data}) => {
    return (
        <div className='container'>
            { 
                data.map((item)=>(
               <div className="cards" key="id">
                <img id="images" src={item.images} alt="" />
                <div className="info">
                    <h1 className='title'>{item.title}</h1>
                
                    <p  id='para' >${item.price}</p>
                    <button className='btns'>BUY NOW</button>
                </div>
            </div>
              ))
            }
            
        </div>
    )
}

export default Card
