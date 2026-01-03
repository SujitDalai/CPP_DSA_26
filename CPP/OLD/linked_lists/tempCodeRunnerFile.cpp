// Deleting node 
// void deleteNode(int position, Node* &head){
//     //deleting first node
//      if(position == 1){
//         Node* temp = head;
//         temp->next->prev = NULL;
//         head = temp -> next;
//         temp ->next = NULL;
//         delete temp;
//      }
//      else{
//         // deleting end or middle node 
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt =1;
//         while(cnt < position){
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//      }
// }