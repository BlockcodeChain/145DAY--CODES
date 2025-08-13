import data from './data'
const Post =()=>{
    return (<>
{
    data.map((posts)=>(
   <div key={posts.id}>
     <h1>{posts.title}</h1>
     <h3>{posts.body}</h3>
   </div>
    ))
}
    
    </>
)}
export default Post 