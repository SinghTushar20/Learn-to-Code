<script lang="ts">
    import { each } from "svelte/internal";
    let tasks : Array<{title:String, status:boolean}> = [];
    let text  = "";
</script>

<style>
    li{
        list-style-type: square;
        color: red;
        font-size: 20px;
    }
    .done{
        color: green;
    }
    button{
        background: paleturquoise;
        color: #000;
        font-weight: bold;
    }
</style>

<form on:submit={(e)=>{
    e.preventDefault();
    tasks = [{title: text, status: false} ,...tasks];
    text = "";
}}><input type="text" bind:value={text} />
    <button type="submit">ADD</button>
</form>
<ul>
    {#each tasks as task}
        <li class={task.status?"done":""} on:click={()=>{
            task.status = !task.status;
        }}>{task.title}</li>
    {/each}
</ul>
<button on:click={()=>{
    tsvscode.postMessage({
       type: "onInfo",
       value: "hill"
   });
}}>Click me</button>