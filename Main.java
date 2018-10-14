import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
//        PrintWriter out = new PrintWriter(new FileWriter("G:\\o.txt"));
        TaskE solver = new TaskE();
        solver.solve(1, in, out);
        out.flush();out.close();
    }
        static class TaskE {
          int n,m,k;
          int match[],dist[];
          int maxmatch=0;
          int max=Integer.MAX_VALUE;
          void upd(int node){
              int u=match[n+1],v=match[n+2];
              if(u!=0)maxmatch--;
              if(v!=0)maxmatch--;
              match[u]=0;match[n+1]=0;
              match[v]=0;match[n+2]=0;
              ja[n+1]=ja[node];
              ja[n+2]=ja[node];
          }
          boolean bfs(){
           dist=new int[n+3];
           ArrayDeque<Integer> ad=new ArrayDeque<>();
           for(int i=0;i<=n+2;i++){
            if(i==0||match[i]!=0)dist[i]=max;
            else{
             dist[i]=0;ad.add(i);
            }
           }
           while(!ad.isEmpty()){
            int u=ad.pollFirst();
            if(dist[u]>dist[0])break;
            for(int v:ja[u]){
             if(dist[match[v]]==max){
              ad.add(match[v]);dist[match[v]]=dist[u]+1;
             }
            }
           }
           return dist[0]!=max;
          }
          boolean dfs(int u){
           if(u==0)return true;
           for(int v:ja[u]){
            if(dist[match[v]]==dist[u]+1){
             if(dfs(match[v])){
              match[u]=v;
              match[v]=u;
              return true;
             }
            }
           }dist[u]=max;return false;
          }
          int hk(){
           while(bfs()){
            for(int i=1;i<=n+2;i++){
             if(match[i]==0){
              if(dfs(i))++maxmatch;
             }
            }
           }
           return maxmatch;
          }
          public void solve(int testNumber, InputReader in, PrintWriter out) {
            n=in.nextInt();m=in.nextInt();k=in.nextInt();
            make(n,m,k,in);
            int ans=0;
            match=new int[n+3+m];
            for(int i=1;i<=n;i++){
             upd(i);
             int val=hk();
             ans=Math.max(ans,val);
             System.out.println(val);
            }
            out.print(ans);
          }
          int ja[][],from[],to[],c[];
          void make(int n,int m,int k,InputReader in){
           ja=new int[n+3][];from=new int[k];to=new int[k];c=new int[n+1];
           for(int i=0;i<k;i++){
            from[i]=in.nextInt();to[i]=n+2+in.nextInt();
            c[from[i]]++;
           }
           for(int i=0;i<=n;i++){
            ja[i]=new int[c[i]];c[i]=0;
           }
           for(int i=0;i<k;i++){
            ja[from[i]][c[from[i]]++]=to[i];
           }
          }
//      int[] radixSort(int[] f){ return radixSort(f, f.length); }
//    	int[] radixSort(int[] f, int n)
//    	{
//    		int[] to = new int[n];
//    		{
//    			int[] b = new int[65537];
//    			for(int i = 0;i < n;i++)b[1+(f[i]&0xffff)]++;
//    			for(int i = 1;i <= 65536;i++)b[i]+=b[i-1];
//    			for(int i = 0;i < n;i++){
//                             to[b[f[i]&0xffff]++] = f[i];
//                            }
//    			int[] d = f; f = to;to = d;
//    		}
//    		{
//    			int[] b = new int[65537];
//    			for(int i = 0;i < n;i++)b[1+(f[i]>>>16)]++;
//    			for(int i = 1;i <= 65536;i++)b[i]+=b[i-1];
//    			for(int i = 0;i < n;i++)to[b[f[i]>>>16]++] = f[i];
//    			int[] d = f; f = to;to = d;
//    		}
//    		return f;
//    	}
    
       }
 
        
    static class InputReader {
        BufferedReader br;
        StringTokenizer st;
        public InputReader(InputStream stream) throws IOException{
            br = new BufferedReader(new InputStreamReader(stream));
//            br = new BufferedReader(new FileReader("G:\\i.in"));
            st = null;
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                String s = null;
                try {
                    s = br.readLine();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                if (s == null)
                    return null;
                st = new StringTokenizer(s);
            }
            return st.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }
        public long nextLong() {
            return Long.parseLong(next());
        }
        public double nextDouble() {
            return Double.parseDouble(next());
        }
    }
}