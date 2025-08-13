import React, { useState, useEffect } from 'react';
import './Navigation.css';
import data from './data';
import Card from './Card'; // Assuming Card component is separate

const Navigation = () => {
    const [dark, setDark] = useState(false);
    const [value, setValue] = useState('');
    const [filterData, setFilterData] = useState(data);

    const darkModeToggle = () => {
        document.body.classList.toggle('dark');
        setDark(prev => !prev);
    };

   

    useEffect(() => {
        const searchTerm = value.trim().toLowerCase();
        if (searchTerm === '') {
            setFilterData(data);
        } else {
            const filtered = data.filter((item) =>
                item.title?.toLowerCase().includes(searchTerm)
            );
            setFilterData(filtered);
        }
    }, [value]);

    

    return (
        <div className='nav'>
            <h1 className='heading'>BUY & SELL STORE</h1>
            <div className="find">
                <input
                    type="text"
                    placeholder="🛒 BUY & SELL STORE"
                    value={value}
                    onChange={setValue((e)=> e.target.value)}
                />
                <div className="buttons">
                    <button className='search'>SEARCH</button>
                    <button className='modes' onClick={darkModeToggle}>
                        {dark ? '🌙' : '☀️'}
                    </button>
                </div>
            </div>

            <Card data={filterData} />
        </div>
    );
};

export default Navigation;
